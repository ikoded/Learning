public class MultiArray {
    public static void main(String[] args){
        int[][] nums1 = {{1,2,3},{4,5,6}};
        displayTable(nums1);
        System.out.println("");
        displayTableForEach(nums1);

        System.out.println("");
        int[] nums2 = {1,2,3};
        displayTable(nums2);

        System.out.println("");
        int[][] nums3 = {{1,2,3},{4,5,6,7},{8,9}};
        displayTable(nums3);
    }

    // Good for if you want to change a value in the for loop
    public static void displayTable(int[][] nums){
        for(int i = 0; i < nums.length; i++){
            for(int x = 0; x < nums[i].length; x++){
                int num = (nums[i][x] == 8) ? 55 : nums[i][x]; // showing that you can alter a value, could not do this if for each
                System.out.print(num + " ");
            }
            System.out.println("");
        }
    }

    public static void displayTable(int[] nums){
        for(int num : nums){
            System.out.print(num + " ");
        }
        System.out.println("");
    }

    // For each is better if not changing values in array, otherwise use traditional for loop
    public static void displayTableForEach(int[][] nums){
        for(int[] rows : nums){
            for(int num : rows){
                System.out.print(num + " ");
            }
            System.out.println("");
        }
    }
}
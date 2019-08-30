/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_ROS_MODEL_DESCRIBERESOURCEDETAILREQUEST_H_
#define ALIBABACLOUD_ROS_MODEL_DESCRIBERESOURCEDETAILREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/ros/ROSExport.h>

namespace AlibabaCloud
{
	namespace ROS
	{
		namespace Model
		{
			class ALIBABACLOUD_ROS_EXPORT DescribeResourceDetailRequest : public RoaServiceRequest
			{

			public:
				DescribeResourceDetailRequest();
				~DescribeResourceDetailRequest();

				std::string getStackId()const;
				void setStackId(const std::string& stackId);
				std::string getStackName()const;
				void setStackName(const std::string& stackName);
				std::string getResourceName()const;
				void setResourceName(const std::string& resourceName);

            private:
				std::string stackId_;
				std::string stackName_;
				std::string resourceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ROS_MODEL_DESCRIBERESOURCEDETAILREQUEST_H_
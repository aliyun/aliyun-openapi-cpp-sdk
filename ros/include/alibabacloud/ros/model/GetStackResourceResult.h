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

#ifndef ALIBABACLOUD_ROS_MODEL_GETSTACKRESOURCERESULT_H_
#define ALIBABACLOUD_ROS_MODEL_GETSTACKRESOURCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ros/ROSExport.h>

namespace AlibabaCloud
{
	namespace ROS
	{
		namespace Model
		{
			class ALIBABACLOUD_ROS_EXPORT GetStackResourceResult : public ServiceResult
			{
			public:


				GetStackResourceResult();
				explicit GetStackResourceResult(const std::string &payload);
				~GetStackResourceResult();
				std::string getStatus()const;
				std::string getLogicalResourceId()const;
				std::string getDescription()const;
				std::string getPhysicalResourceId()const;
				std::string getStatusReason()const;
				std::string getCreateTime()const;
				std::string getMetadata()const;
				std::string getUpdateTime()const;
				std::string getResourceType()const;
				std::vector<std::string> getResourceAttributes()const;
				std::string getStackName()const;
				std::string getStackId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string logicalResourceId_;
				std::string description_;
				std::string physicalResourceId_;
				std::string statusReason_;
				std::string createTime_;
				std::string metadata_;
				std::string updateTime_;
				std::string resourceType_;
				std::vector<std::string> resourceAttributes_;
				std::string stackName_;
				std::string stackId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ROS_MODEL_GETSTACKRESOURCERESULT_H_
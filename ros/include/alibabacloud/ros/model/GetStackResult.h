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

#ifndef ALIBABACLOUD_ROS_MODEL_GETSTACKRESULT_H_
#define ALIBABACLOUD_ROS_MODEL_GETSTACKRESULT_H_

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
			class ALIBABACLOUD_ROS_EXPORT GetStackResult : public ServiceResult
			{
			public:
				struct Parameter
				{
					std::string parameterValue;
					std::string parameterKey;
				};


				GetStackResult();
				explicit GetStackResult(const std::string &payload);
				~GetStackResult();
				std::string getStatus()const;
				std::vector<Parameter> getParameters()const;
				std::string getDescription()const;
				std::string getStatusReason()const;
				std::string getParentStackId()const;
				std::string getCreateTime()const;
				std::string getTemplateDescription()const;
				std::vector<std::string> getOutputs()const;
				std::string getUpdateTime()const;
				std::string getRegionId()const;
				std::vector<std::string> getNotificationURLs()const;
				bool getDisableRollback()const;
				std::string getStackName()const;
				std::string getStackId()const;
				int getTimeoutInMinutes()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::vector<Parameter> parameters_;
				std::string description_;
				std::string statusReason_;
				std::string parentStackId_;
				std::string createTime_;
				std::string templateDescription_;
				std::vector<std::string> outputs_;
				std::string updateTime_;
				std::string regionId_;
				std::vector<std::string> notificationURLs_;
				bool disableRollback_;
				std::string stackName_;
				std::string stackId_;
				int timeoutInMinutes_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ROS_MODEL_GETSTACKRESULT_H_
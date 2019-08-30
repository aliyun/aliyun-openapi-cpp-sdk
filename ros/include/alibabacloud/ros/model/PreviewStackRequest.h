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

#ifndef ALIBABACLOUD_ROS_MODEL_PREVIEWSTACKREQUEST_H_
#define ALIBABACLOUD_ROS_MODEL_PREVIEWSTACKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ros/ROSExport.h>

namespace AlibabaCloud
{
	namespace ROS
	{
		namespace Model
		{
			class ALIBABACLOUD_ROS_EXPORT PreviewStackRequest : public RpcServiceRequest
			{
				struct Parameters
				{
					std::string parameterValue;
					std::string parameterKey;
				};

			public:
				PreviewStackRequest();
				~PreviewStackRequest();

				std::string getStackPolicyURL()const;
				void setStackPolicyURL(const std::string& stackPolicyURL);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getTemplateBody()const;
				void setTemplateBody(const std::string& templateBody);
				bool getDisableRollback()const;
				void setDisableRollback(bool disableRollback);
				std::string getStackName()const;
				void setStackName(const std::string& stackName);
				std::vector<Parameters> getParameters()const;
				void setParameters(const std::vector<Parameters>& parameters);
				std::string getStackPolicyBody()const;
				void setStackPolicyBody(const std::string& stackPolicyBody);
				long getTimeoutInMinutes()const;
				void setTimeoutInMinutes(long timeoutInMinutes);
				std::string getTemplateURL()const;
				void setTemplateURL(const std::string& templateURL);

            private:
				std::string stackPolicyURL_;
				std::string regionId_;
				std::string clientToken_;
				std::string templateBody_;
				bool disableRollback_;
				std::string stackName_;
				std::vector<Parameters> parameters_;
				std::string stackPolicyBody_;
				long timeoutInMinutes_;
				std::string templateURL_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ROS_MODEL_PREVIEWSTACKREQUEST_H_
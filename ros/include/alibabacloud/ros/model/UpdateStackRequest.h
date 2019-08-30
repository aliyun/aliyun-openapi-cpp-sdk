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

#ifndef ALIBABACLOUD_ROS_MODEL_UPDATESTACKREQUEST_H_
#define ALIBABACLOUD_ROS_MODEL_UPDATESTACKREQUEST_H_

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
			class ALIBABACLOUD_ROS_EXPORT UpdateStackRequest : public RpcServiceRequest
			{
				struct Parameters
				{
					std::string parameterValue;
					std::string parameterKey;
				};

			public:
				UpdateStackRequest();
				~UpdateStackRequest();

				std::string getStackPolicyDuringUpdateURL()const;
				void setStackPolicyDuringUpdateURL(const std::string& stackPolicyDuringUpdateURL);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getTemplateBody()const;
				void setTemplateBody(const std::string& templateBody);
				std::string getStackId()const;
				void setStackId(const std::string& stackId);
				bool getDisableRollback()const;
				void setDisableRollback(bool disableRollback);
				bool getEnableRecover()const;
				void setEnableRecover(bool enableRecover);
				std::string getUpdateAllowPolicy()const;
				void setUpdateAllowPolicy(const std::string& updateAllowPolicy);
				long getTimeoutInMinutes()const;
				void setTimeoutInMinutes(long timeoutInMinutes);
				bool getUsePreviousParameters()const;
				void setUsePreviousParameters(bool usePreviousParameters);
				std::string getTemplateURL()const;
				void setTemplateURL(const std::string& templateURL);
				std::string getStackPolicyDuringUpdateBody()const;
				void setStackPolicyDuringUpdateBody(const std::string& stackPolicyDuringUpdateBody);
				std::string getStackPolicyURL()const;
				void setStackPolicyURL(const std::string& stackPolicyURL);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::vector<Parameters> getParameters()const;
				void setParameters(const std::vector<Parameters>& parameters);
				std::string getStackPolicyBody()const;
				void setStackPolicyBody(const std::string& stackPolicyBody);

            private:
				std::string stackPolicyDuringUpdateURL_;
				std::string clientToken_;
				std::string templateBody_;
				std::string stackId_;
				bool disableRollback_;
				bool enableRecover_;
				std::string updateAllowPolicy_;
				long timeoutInMinutes_;
				bool usePreviousParameters_;
				std::string templateURL_;
				std::string stackPolicyDuringUpdateBody_;
				std::string stackPolicyURL_;
				std::string regionId_;
				std::vector<Parameters> parameters_;
				std::string stackPolicyBody_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ROS_MODEL_UPDATESTACKREQUEST_H_
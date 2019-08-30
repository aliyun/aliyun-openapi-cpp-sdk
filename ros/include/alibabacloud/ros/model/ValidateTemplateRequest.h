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

#ifndef ALIBABACLOUD_ROS_MODEL_VALIDATETEMPLATEREQUEST_H_
#define ALIBABACLOUD_ROS_MODEL_VALIDATETEMPLATEREQUEST_H_

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
			class ALIBABACLOUD_ROS_EXPORT ValidateTemplateRequest : public RpcServiceRequest
			{

			public:
				ValidateTemplateRequest();
				~ValidateTemplateRequest();

				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getTemplateBody()const;
				void setTemplateBody(const std::string& templateBody);
				std::string getTemplateURL()const;
				void setTemplateURL(const std::string& templateURL);

            private:
				std::string regionId_;
				std::string templateBody_;
				std::string templateURL_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ROS_MODEL_VALIDATETEMPLATEREQUEST_H_
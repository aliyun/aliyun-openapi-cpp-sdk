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

#ifndef ALIBABACLOUD_CMS_MODEL_TASKCONFIGCREATEREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_TASKCONFIGCREATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT TaskConfigCreateRequest : public RpcServiceRequest
			{

			public:
				TaskConfigCreateRequest();
				~TaskConfigCreateRequest();

				std::vector<std::string> getInstanceList()const;
				void setInstanceList(const std::vector<std::string>& instanceList);
				std::string getJsonData()const;
				void setJsonData(const std::string& jsonData);
				std::string getTaskType()const;
				void setTaskType(const std::string& taskType);
				std::string getTaskScope()const;
				void setTaskScope(const std::string& taskScope);
				std::string getAlertConfig()const;
				void setAlertConfig(const std::string& alertConfig);
				long getGroupId()const;
				void setGroupId(long groupId);
				std::string getTaskName()const;
				void setTaskName(const std::string& taskName);
				std::string getGroupName()const;
				void setGroupName(const std::string& groupName);

            private:
				std::vector<std::string> instanceList_;
				std::string jsonData_;
				std::string taskType_;
				std::string taskScope_;
				std::string alertConfig_;
				long groupId_;
				std::string taskName_;
				std::string groupName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_TASKCONFIGCREATEREQUEST_H_
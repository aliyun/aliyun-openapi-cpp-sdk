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

#ifndef ALIBABACLOUD_CMS_MODEL_CREATETASKREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_CREATETASKREQUEST_H_

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
			class ALIBABACLOUD_CMS_EXPORT CreateTaskRequest : public RpcServiceRequest
			{

			public:
				CreateTaskRequest();
				~CreateTaskRequest();

				std::string getCaller()const;
				void setCaller(const std::string& caller);
				std::string getAddress()const;
				void setAddress(const std::string& address);
				std::string getTaskType()const;
				void setTaskType(const std::string& taskType);
				std::string getIspCity()const;
				void setIspCity(const std::string& ispCity);
				std::string getAlertIds()const;
				void setAlertIds(const std::string& alertIds);
				std::string getOptions()const;
				void setOptions(const std::string& options);
				std::string getTaskName()const;
				void setTaskName(const std::string& taskName);
				std::string getInterval()const;
				void setInterval(const std::string& interval);
				std::string getAlertRule()const;
				void setAlertRule(const std::string& alertRule);

            private:
				std::string caller_;
				std::string address_;
				std::string taskType_;
				std::string ispCity_;
				std::string alertIds_;
				std::string options_;
				std::string taskName_;
				std::string interval_;
				std::string alertRule_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_CREATETASKREQUEST_H_
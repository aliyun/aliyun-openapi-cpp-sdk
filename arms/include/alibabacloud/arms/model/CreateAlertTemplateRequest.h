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

#ifndef ALIBABACLOUD_ARMS_MODEL_CREATEALERTTEMPLATEREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_CREATEALERTTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT CreateAlertTemplateRequest : public RpcServiceRequest
			{

			public:
				CreateAlertTemplateRequest();
				~CreateAlertTemplateRequest();

				std::string getTemplateProvider()const;
				void setTemplateProvider(const std::string& templateProvider);
				std::string getAnnotations()const;
				void setAnnotations(const std::string& annotations);
				std::string getRule()const;
				void setRule(const std::string& rule);
				std::string getProxyUserId()const;
				void setProxyUserId(const std::string& proxyUserId);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getMessage()const;
				void setMessage(const std::string& message);
				std::string getParentId()const;
				void setParentId(const std::string& parentId);
				std::string getLabels()const;
				void setLabels(const std::string& labels);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getMatchExpressions()const;
				void setMatchExpressions(const std::string& matchExpressions);

            private:
				std::string templateProvider_;
				std::string annotations_;
				std::string rule_;
				std::string proxyUserId_;
				std::string type_;
				std::string message_;
				std::string parentId_;
				std::string labels_;
				std::string regionId_;
				std::string name_;
				std::string matchExpressions_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_CREATEALERTTEMPLATEREQUEST_H_
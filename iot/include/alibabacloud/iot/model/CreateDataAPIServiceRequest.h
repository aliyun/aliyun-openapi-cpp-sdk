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

#ifndef ALIBABACLOUD_IOT_MODEL_CREATEDATAAPISERVICEREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_CREATEDATAAPISERVICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/iot/IotExport.h>

namespace AlibabaCloud
{
	namespace Iot
	{
		namespace Model
		{
			class ALIBABACLOUD_IOT_EXPORT CreateDataAPIServiceRequest : public RpcServiceRequest
			{
				struct ResponseParam
				{
					std::string name;
					std::string type;
					bool required;
					std::string desc;
					std::string example;
				};
				struct RequestParam
				{
					std::string name;
					std::string type;
					bool required;
					std::string desc;
					std::string example;
				};

			public:
				CreateDataAPIServiceRequest();
				~CreateDataAPIServiceRequest();

				std::vector<ResponseParam> getResponseParam()const;
				void setResponseParam(const std::vector<ResponseParam>& responseParam);
				std::string getOriginSql()const;
				void setOriginSql(const std::string& originSql);
				std::string getDisplayName()const;
				void setDisplayName(const std::string& displayName);
				std::string getApiPath()const;
				void setApiPath(const std::string& apiPath);
				std::vector<RequestParam> getRequestParam()const;
				void setRequestParam(const std::vector<RequestParam>& requestParam);
				std::string getFolderId()const;
				void setFolderId(const std::string& folderId);
				std::string getTemplateSql()const;
				void setTemplateSql(const std::string& templateSql);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getDesc()const;
				void setDesc(const std::string& desc);

            private:
				std::vector<ResponseParam> responseParam_;
				std::string originSql_;
				std::string displayName_;
				std::string apiPath_;
				std::vector<RequestParam> requestParam_;
				std::string folderId_;
				std::string templateSql_;
				std::string accessKeyId_;
				std::string desc_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_CREATEDATAAPISERVICEREQUEST_H_
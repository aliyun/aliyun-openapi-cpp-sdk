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

#ifndef ALIBABACLOUD_NLP_AUTOML_MODEL_ADDMTINTERVENEPACKAGEREQUEST_H_
#define ALIBABACLOUD_NLP_AUTOML_MODEL_ADDMTINTERVENEPACKAGEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/nlp-automl/Nlp_automlExport.h>

namespace AlibabaCloud
{
	namespace Nlp_automl
	{
		namespace Model
		{
			class ALIBABACLOUD_NLP_AUTOML_EXPORT AddMtIntervenePackageRequest : public RpcServiceRequest
			{

			public:
				AddMtIntervenePackageRequest();
				~AddMtIntervenePackageRequest();

				std::string getSourceLanguage()const;
				void setSourceLanguage(const std::string& sourceLanguage);
				std::string getProduct()const;
				void setProduct(const std::string& product);
				std::string getPackageName()const;
				void setPackageName(const std::string& packageName);
				int getTenantId()const;
				void setTenantId(int tenantId);
				std::string getProjectType()const;
				void setProjectType(const std::string& projectType);
				std::string getSourceType()const;
				void setSourceType(const std::string& sourceType);
				std::string getTargetLanguage()const;
				void setTargetLanguage(const std::string& targetLanguage);
				std::string getCategory()const;
				void setCategory(const std::string& category);
				int getProjectId()const;
				void setProjectId(int projectId);

            private:
				std::string sourceLanguage_;
				std::string product_;
				std::string packageName_;
				int tenantId_;
				std::string projectType_;
				std::string sourceType_;
				std::string targetLanguage_;
				std::string category_;
				int projectId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NLP_AUTOML_MODEL_ADDMTINTERVENEPACKAGEREQUEST_H_
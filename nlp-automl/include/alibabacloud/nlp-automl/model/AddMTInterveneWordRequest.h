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

#ifndef ALIBABACLOUD_NLP_AUTOML_MODEL_ADDMTINTERVENEWORDREQUEST_H_
#define ALIBABACLOUD_NLP_AUTOML_MODEL_ADDMTINTERVENEWORDREQUEST_H_

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
			class ALIBABACLOUD_NLP_AUTOML_EXPORT AddMTInterveneWordRequest : public RpcServiceRequest
			{

			public:
				AddMTInterveneWordRequest();
				~AddMTInterveneWordRequest();

				std::string getProduct()const;
				void setProduct(const std::string& product);
				std::string getSourceText()const;
				void setSourceText(const std::string& sourceText);
				std::string getPackageId()const;
				void setPackageId(const std::string& packageId);
				std::string getTargetText()const;
				void setTargetText(const std::string& targetText);
				int getTenantId()const;
				void setTenantId(int tenantId);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);

            private:
				std::string product_;
				std::string sourceText_;
				std::string packageId_;
				std::string targetText_;
				int tenantId_;
				std::string projectId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NLP_AUTOML_MODEL_ADDMTINTERVENEWORDREQUEST_H_
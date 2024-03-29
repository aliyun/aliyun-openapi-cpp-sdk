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

#ifndef ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBECERTIFICATESRESULT_H_
#define ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBECERTIFICATESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/waf-openapi/Waf_openapiExport.h>

namespace AlibabaCloud
{
	namespace Waf_openapi
	{
		namespace Model
		{
			class ALIBABACLOUD_WAF_OPENAPI_EXPORT DescribeCertificatesResult : public ServiceResult
			{
			public:
				struct Certificate
				{
					long endTime;
					std::vector<std::string> sans;
					long certificateId;
					std::string certificateName;
					bool isUsing;
					std::string commonName;
				};


				DescribeCertificatesResult();
				explicit DescribeCertificatesResult(const std::string &payload);
				~DescribeCertificatesResult();
				std::vector<Certificate> getCertificates()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Certificate> certificates_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBECERTIFICATESRESULT_H_
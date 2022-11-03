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

#ifndef ALIBABACLOUD_CAS_MODEL_DESCRIBECERTIFICATESTATERESULT_H_
#define ALIBABACLOUD_CAS_MODEL_DESCRIBECERTIFICATESTATERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cas/CasExport.h>

namespace AlibabaCloud
{
	namespace Cas
	{
		namespace Model
		{
			class ALIBABACLOUD_CAS_EXPORT DescribeCertificateStateResult : public ServiceResult
			{
			public:


				DescribeCertificateStateResult();
				explicit DescribeCertificateStateResult(const std::string &payload);
				~DescribeCertificateStateResult();
				std::string getType()const;
				std::string getPrivateKey()const;
				std::string getRecordType()const;
				std::string getContent()const;
				std::string getRecordDomain()const;
				std::string getRecordValue()const;
				std::string getDomain()const;
				std::string getValidateType()const;
				std::string getUri()const;
				std::string getCertificate()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string type_;
				std::string privateKey_;
				std::string recordType_;
				std::string content_;
				std::string recordDomain_;
				std::string recordValue_;
				std::string domain_;
				std::string validateType_;
				std::string uri_;
				std::string certificate_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAS_MODEL_DESCRIBECERTIFICATESTATERESULT_H_
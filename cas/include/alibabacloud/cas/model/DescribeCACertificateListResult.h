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

#ifndef ALIBABACLOUD_CAS_MODEL_DESCRIBECACERTIFICATELISTRESULT_H_
#define ALIBABACLOUD_CAS_MODEL_DESCRIBECACERTIFICATELISTRESULT_H_

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
			class ALIBABACLOUD_CAS_EXPORT DescribeCACertificateListResult : public ServiceResult
			{
			public:
				struct Certificate
				{
					std::string sha2;
					std::string organization;
					std::string subjectDN;
					std::string identifier;
					std::string sans;
					std::string countryCode;
					std::string signAlgorithm;
					std::string commonName;
					std::string md5;
					long beforeDate;
					std::string status;
					long afterDate;
					int years;
					int trial;
					std::string locality;
					std::string algorithm;
					std::string parentIdentifier;
					std::string x509Certificate;
					std::string certificateType;
					int gift;
					std::string serialNumber;
					std::string state;
					std::string organizationUnit;
					std::string alias;
					int keySize;
				};


				DescribeCACertificateListResult();
				explicit DescribeCACertificateListResult(const std::string &payload);
				~DescribeCACertificateListResult();
				int getTotalCount()const;
				int getPageCount()const;
				int getCurrentPage()const;
				std::vector<Certificate> getCertificateList()const;
				int getShowSize()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageCount_;
				int currentPage_;
				std::vector<Certificate> certificateList_;
				int showSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAS_MODEL_DESCRIBECACERTIFICATELISTRESULT_H_
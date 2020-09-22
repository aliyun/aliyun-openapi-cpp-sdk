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

#ifndef ALIBABACLOUD_VS_MODEL_DESCRIBEVSDOMAINCERTIFICATEINFORESULT_H_
#define ALIBABACLOUD_VS_MODEL_DESCRIBEVSDOMAINCERTIFICATEINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT DescribeVsDomainCertificateInfoResult : public ServiceResult
			{
			public:
				struct CertInfo
				{
					std::string status;
					std::string certLife;
					std::string domainName;
					std::string sSLPub;
					std::string certDomainName;
					std::string certOrg;
					std::string certType;
					std::string certExpireTime;
					std::string certName;
					std::string serverCertificateStatus;
				};


				DescribeVsDomainCertificateInfoResult();
				explicit DescribeVsDomainCertificateInfoResult(const std::string &payload);
				~DescribeVsDomainCertificateInfoResult();
				std::vector<CertInfo> getCertInfos()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<CertInfo> certInfos_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_DESCRIBEVSDOMAINCERTIFICATEINFORESULT_H_
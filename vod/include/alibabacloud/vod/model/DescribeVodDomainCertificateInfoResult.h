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

#ifndef ALIBABACLOUD_VOD_MODEL_DESCRIBEVODDOMAINCERTIFICATEINFORESULT_H_
#define ALIBABACLOUD_VOD_MODEL_DESCRIBEVODDOMAINCERTIFICATEINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT DescribeVodDomainCertificateInfoResult : public ServiceResult
			{
			public:
				struct CertInfo
				{
					std::string status;
					std::string domainName;
					std::string certId;
					std::string certRegion;
					std::string certType;
					std::string certStartTime;
					std::string serverCertificateStatus;
					std::string serverCertificate;
					std::string certUpdateTime;
					std::string certLife;
					std::string certDomainName;
					std::string certOrg;
					std::string certExpireTime;
					std::string domainCnameStatus;
					std::string certName;
				};


				DescribeVodDomainCertificateInfoResult();
				explicit DescribeVodDomainCertificateInfoResult(const std::string &payload);
				~DescribeVodDomainCertificateInfoResult();
				std::vector<CertInfo> getCertInfos()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<CertInfo> certInfos_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_DESCRIBEVODDOMAINCERTIFICATEINFORESULT_H_
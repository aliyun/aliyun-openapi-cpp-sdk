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

#ifndef ALIBABACLOUD_SLB_MODEL_DESCRIBESERVERCERTIFICATESRESULT_H_
#define ALIBABACLOUD_SLB_MODEL_DESCRIBESERVERCERTIFICATESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/slb/SlbExport.h>

namespace AlibabaCloud
{
	namespace Slb
	{
		namespace Model
		{
			class ALIBABACLOUD_SLB_EXPORT DescribeServerCertificatesResult : public ServiceResult
			{
			public:
				struct ServerCertificate
				{
					std::string regionIdAlias;
					std::string fingerprint;
					std::string aliCloudCertificateName;
					std::string resourceGroupId;
					int isAliCloudCertificate;
					std::string createTime;
					std::string serverCertificateId;
					std::string serverCertificateName;
					std::string regionId;
					long createTimeStamp;
					std::string aliCloudCertificateId;
				};


				DescribeServerCertificatesResult();
				explicit DescribeServerCertificatesResult(const std::string &payload);
				~DescribeServerCertificatesResult();
				std::vector<ServerCertificate> getServerCertificates()const;
				void setServerCertificates(const std::vector<ServerCertificate>& serverCertificates);

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ServerCertificate> serverCertificates_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBESERVERCERTIFICATESRESULT_H_
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

#ifndef ALIBABACLOUD_SLB_MODEL_DESCRIBECACERTIFICATESRESULT_H_
#define ALIBABACLOUD_SLB_MODEL_DESCRIBECACERTIFICATESRESULT_H_

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
			class ALIBABACLOUD_SLB_EXPORT DescribeCACertificatesResult : public ServiceResult
			{
			public:
				struct CACertificate
				{
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string fingerprint;
					std::string resourceGroupId;
					long expireTimeStamp;
					std::string cACertificateId;
					std::string createTime;
					std::string cACertificateName;
					std::string regionId;
					std::string expireTime;
					std::vector<CACertificate::Tag> tags;
					long createTimeStamp;
					std::string commonName;
				};


				DescribeCACertificatesResult();
				explicit DescribeCACertificatesResult(const std::string &payload);
				~DescribeCACertificatesResult();
				std::vector<CACertificate> getCACertificates()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<CACertificate> cACertificates_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBECACERTIFICATESRESULT_H_
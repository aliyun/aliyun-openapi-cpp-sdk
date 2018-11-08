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

#ifndef ALIBABACLOUD_SLB_MODEL_UPLOADCACERTIFICATERESULT_H_
#define ALIBABACLOUD_SLB_MODEL_UPLOADCACERTIFICATERESULT_H_

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
			class ALIBABACLOUD_SLB_EXPORT UploadCACertificateResult : public ServiceResult
			{
			public:


				UploadCACertificateResult();
				explicit UploadCACertificateResult(const std::string &payload);
				~UploadCACertificateResult();
				std::string getFingerprint()const;
				std::string getResourceGroupId()const;
				long getExpireTimeStamp()const;
				std::string getCACertificateId()const;
				std::string getCreateTime()const;
				std::string getCACertificateName()const;
				std::string getExpireTime()const;
				long getCreateTimeStamp()const;
				std::string getCommonName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string fingerprint_;
				std::string resourceGroupId_;
				long expireTimeStamp_;
				std::string cACertificateId_;
				std::string createTime_;
				std::string cACertificateName_;
				std::string expireTime_;
				long createTimeStamp_;
				std::string commonName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_UPLOADCACERTIFICATERESULT_H_
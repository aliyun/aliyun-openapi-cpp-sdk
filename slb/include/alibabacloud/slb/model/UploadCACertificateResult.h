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
				void setFingerprint(const std::string& fingerprint);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getCACertificateId()const;
				void setCACertificateId(const std::string& cACertificateId);
				std::string getCreateTime()const;
				void setCreateTime(const std::string& createTime);
				std::string getCACertificateName()const;
				void setCACertificateName(const std::string& cACertificateName);
				long getCreateTimeStamp()const;
				void setCreateTimeStamp(long createTimeStamp);

			protected:
				void parse(const std::string &payload);
			private:
				std::string fingerprint_;
				std::string resourceGroupId_;
				std::string cACertificateId_;
				std::string createTime_;
				std::string cACertificateName_;
				long createTimeStamp_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_UPLOADCACERTIFICATERESULT_H_
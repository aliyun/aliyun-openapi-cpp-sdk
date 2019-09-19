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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_GENERATECOMPANYREGUPLOADPOLICYRESULT_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_GENERATECOMPANYREGUPLOADPOLICYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/companyreg/CompanyregExport.h>

namespace AlibabaCloud
{
	namespace Companyreg
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPANYREG_EXPORT GenerateCompanyRegUploadPolicyResult : public ServiceResult
			{
			public:


				GenerateCompanyRegUploadPolicyResult();
				explicit GenerateCompanyRegUploadPolicyResult(const std::string &payload);
				~GenerateCompanyRegUploadPolicyResult();
				std::string getFileDir()const;
				std::string getEncodedPolicy()const;
				long getMin()const;
				std::string getAccessId()const;
				long getMax()const;
				std::string getSignature()const;
				std::string getHost()const;
				std::string getEncryption()const;
				long getExpireTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string fileDir_;
				std::string encodedPolicy_;
				long min_;
				std::string accessId_;
				long max_;
				std::string signature_;
				std::string host_;
				std::string encryption_;
				long expireTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_GENERATECOMPANYREGUPLOADPOLICYRESULT_H_
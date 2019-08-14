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

#ifndef ALIBABACLOUD_CAS_MODEL_DESCRIBECERTIFICATEDETAILRESULT_H_
#define ALIBABACLOUD_CAS_MODEL_DESCRIBECERTIFICATEDETAILRESULT_H_

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
			class ALIBABACLOUD_CAS_EXPORT DescribeCertificateDetailResult : public ServiceResult
			{
			public:


				DescribeCertificateDetailResult();
				explicit DescribeCertificateDetailResult(const std::string &payload);
				~DescribeCertificateDetailResult();
				long getAfterDate()const;
				std::string getInstanceId()const;
				std::string getSourceType()const;
				std::string getFingerPrint()const;
				std::string getCertType()const;
				int getRemainingDays()const;
				long getOrderId()const;
				std::string getStatusCode()const;
				std::string getName()const;
				std::string getDomains()const;
				std::string getBrandName()const;
				int getYear()const;
				int getAccessDownload()const;
				long getId()const;
				long getBeforeDate()const;

			protected:
				void parse(const std::string &payload);
			private:
				long afterDate_;
				std::string instanceId_;
				std::string sourceType_;
				std::string fingerPrint_;
				std::string certType_;
				int remainingDays_;
				long orderId_;
				std::string statusCode_;
				std::string name_;
				std::string domains_;
				std::string brandName_;
				int year_;
				int accessDownload_;
				long id_;
				long beforeDate_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAS_MODEL_DESCRIBECERTIFICATEDETAILRESULT_H_
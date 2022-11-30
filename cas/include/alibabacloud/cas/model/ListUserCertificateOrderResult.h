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

#ifndef ALIBABACLOUD_CAS_MODEL_LISTUSERCERTIFICATEORDERRESULT_H_
#define ALIBABACLOUD_CAS_MODEL_LISTUSERCERTIFICATEORDERRESULT_H_

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
			class ALIBABACLOUD_CAS_EXPORT ListUserCertificateOrderResult : public ServiceResult
			{
			public:
				struct CertificateOrderListItem
				{
					std::string sha2;
					std::string productName;
					std::string resourceGroupId;
					std::string issuer;
					long certificateId;
					std::string sourceType;
					std::string certType;
					bool upload;
					std::string partnerOrderId;
					std::string orgName;
					std::string rootBrand;
					std::string name;
					std::string startDate;
					long aliyunOrderId;
					std::string domainType;
					std::string trusteeStatus;
					std::string sans;
					long domainCount;
					std::string commonName;
					std::string status;
					std::string serialNo;
					std::string fingerprint;
					std::string instanceId;
					std::string productCode;
					long certEndTime;
					long wildDomainCount;
					bool expired;
					std::string city;
					long certStartTime;
					long orderId;
					std::string algorithm;
					std::string endDate;
					std::string province;
					std::string country;
					std::string domain;
					long buyDate;
				};


				ListUserCertificateOrderResult();
				explicit ListUserCertificateOrderResult(const std::string &payload);
				~ListUserCertificateOrderResult();
				long getTotalCount()const;
				long getCurrentPage()const;
				long getShowSize()const;
				std::vector<CertificateOrderListItem> getCertificateOrderList()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				long currentPage_;
				long showSize_;
				std::vector<CertificateOrderListItem> certificateOrderList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAS_MODEL_LISTUSERCERTIFICATEORDERRESULT_H_
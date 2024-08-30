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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_QUERYDOMAINSPECIALBIZDETAILRESULT_H_
#define ALIBABACLOUD_DOMAIN_MODEL_QUERYDOMAINSPECIALBIZDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/domain/DomainExport.h>

namespace AlibabaCloud
{
	namespace Domain
	{
		namespace Model
		{
			class ALIBABACLOUD_DOMAIN_EXPORT QueryDomainSpecialBizDetailResult : public ServiceResult
			{
			public:
				struct Module
				{
					struct DomainSpecialBizContact
					{
						std::string eName;
						std::string cVenu;
						std::string email;
						std::string registrantId;
						std::string vspContactId;
						std::string postalcode;
						std::string cCity;
						std::string telArea;
						std::string faxArea;
						int regType;
						std::string eProvince;
						std::string faxExt;
						std::string eCompany;
						std::string cCountry;
						std::string mobile;
						std::string eVenu;
						std::string telMain;
						std::string faxMain;
						std::string cCompany;
						std::string cProvince;
						std::string extend;
						std::string cName;
						std::string eCity;
						long bizId;
						std::string telExt;
					};
					struct DomainSpecialOrderResult
					{
						std::string orderTime;
						std::string orderStatus;
						std::string actionType;
						std::string subOrderId;
						std::string orderCurrency;
						int orderYear;
						std::string saleId;
						double orderAmount;
						std::string orderId;
					};
					struct DomainSpecialBizCredential
					{
						int holderCert;
						std::string credentialUrl;
						std::string domainName;
						std::string saleId;
						std::string credentialType;
						long bizId;
						std::string credentialNo;
					};
					int status;
					std::string auditMsg;
					std::vector<DomainSpecialBizCredential> domainSpecialBizCredentials;
					std::string domainName;
					std::string bizNo;
					long createTime;
					std::string gmtModified;
					std::string saleId;
					std::string productId;
					std::string bizType;
					std::string orderId;
					DomainSpecialBizContact domainSpecialBizContact;
					std::string bizStatus;
					std::string statusDesc;
					std::string gmtCreate;
					std::string userId;
					long updateTime;
					std::string bizName;
					DomainSpecialOrderResult domainSpecialOrderResult;
					long id;
				};


				QueryDomainSpecialBizDetailResult();
				explicit QueryDomainSpecialBizDetailResult(const std::string &payload);
				~QueryDomainSpecialBizDetailResult();
				bool getAllowRetry()const;
				bool getSynchro()const;
				std::vector<std::string> getErrorArgs()const;
				int getHttpStatusCode()const;
				std::string getErrorMsg()const;
				std::string getDynamicCode()const;
				std::string getDynamicMessage()const;
				std::string getErrorCode()const;
				Module getModule()const;
				bool getSuccess()const;
				std::string getAppName()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool allowRetry_;
				bool synchro_;
				std::vector<std::string> errorArgs_;
				int httpStatusCode_;
				std::string errorMsg_;
				std::string dynamicCode_;
				std::string dynamicMessage_;
				std::string errorCode_;
				Module module_;
				bool success_;
				std::string appName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_QUERYDOMAINSPECIALBIZDETAILRESULT_H_
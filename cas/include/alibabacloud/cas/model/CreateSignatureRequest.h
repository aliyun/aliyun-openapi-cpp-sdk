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

#ifndef ALIBABACLOUD_CAS_MODEL_CREATESIGNATUREREQUEST_H_
#define ALIBABACLOUD_CAS_MODEL_CREATESIGNATUREREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cas/CasExport.h>

namespace AlibabaCloud
{
	namespace Cas
	{
		namespace Model
		{
			class ALIBABACLOUD_CAS_EXPORT CreateSignatureRequest : public RpcServiceRequest
			{

			public:
				CreateSignatureRequest();
				~CreateSignatureRequest();

				int getQuantity()const;
				void setQuantity(int quantity);
				std::string getHandSignImg()const;
				void setHandSignImg(const std::string& handSignImg);
				std::string getDocId()const;
				void setDocId(const std::string& docId);
				std::string getCustomApi()const;
				void setCustomApi(const std::string& customApi);
				int getPositionPage()const;
				void setPositionPage(int positionPage);
				std::string getDocTitle()const;
				void setDocTitle(const std::string& docTitle);
				int getPositionX()const;
				void setPositionX(int positionX);
				int getPositionY()const;
				void setPositionY(int positionY);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getPeopleId()const;
				void setPeopleId(const std::string& peopleId);
				int getPositionType()const;
				void setPositionType(int positionType);
				std::string getSignKeyword()const;
				void setSignKeyword(const std::string& signKeyword);
				std::string getNotifyUrl()const;
				void setNotifyUrl(const std::string& notifyUrl);
				int getValidity()const;
				void setValidity(int validity);
				std::string getReturnUrl()const;
				void setReturnUrl(const std::string& returnUrl);
				std::string getLang()const;
				void setLang(const std::string& lang);
				int getKeywordStrategy()const;
				void setKeywordStrategy(int keywordStrategy);

            private:
				int quantity_;
				std::string handSignImg_;
				std::string docId_;
				std::string customApi_;
				int positionPage_;
				std::string docTitle_;
				int positionX_;
				int positionY_;
				std::string sourceIp_;
				std::string peopleId_;
				int positionType_;
				std::string signKeyword_;
				std::string notifyUrl_;
				int validity_;
				std::string returnUrl_;
				std::string lang_;
				int keywordStrategy_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAS_MODEL_CREATESIGNATUREREQUEST_H_
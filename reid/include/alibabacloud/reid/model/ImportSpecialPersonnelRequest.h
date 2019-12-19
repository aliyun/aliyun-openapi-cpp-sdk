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

#ifndef ALIBABACLOUD_REID_MODEL_IMPORTSPECIALPERSONNELREQUEST_H_
#define ALIBABACLOUD_REID_MODEL_IMPORTSPECIALPERSONNELREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/reid/ReidExport.h>

namespace AlibabaCloud
{
	namespace Reid
	{
		namespace Model
		{
			class ALIBABACLOUD_REID_EXPORT ImportSpecialPersonnelRequest : public RpcServiceRequest
			{

			public:
				ImportSpecialPersonnelRequest();
				~ImportSpecialPersonnelRequest();

				long getUkId()const;
				void setUkId(long ukId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getExternalId()const;
				void setExternalId(const std::string& externalId);
				std::string getPersonType()const;
				void setPersonType(const std::string& personType);
				std::string getUrls()const;
				void setUrls(const std::string& urls);
				std::string getPersonName()const;
				void setPersonName(const std::string& personName);
				std::string getStoreIds()const;
				void setStoreIds(const std::string& storeIds);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				long ukId_;
				std::string description_;
				std::string externalId_;
				std::string personType_;
				std::string urls_;
				std::string personName_;
				std::string storeIds_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_REID_MODEL_IMPORTSPECIALPERSONNELREQUEST_H_
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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_DESCIRBECOMBINETRADEMARKREQUEST_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_DESCIRBECOMBINETRADEMARKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/trademark/TrademarkExport.h>

namespace AlibabaCloud
{
	namespace Trademark
	{
		namespace Model
		{
			class ALIBABACLOUD_TRADEMARK_EXPORT DescirbeCombineTrademarkRequest : public RpcServiceRequest
			{

			public:
				DescirbeCombineTrademarkRequest();
				~DescirbeCombineTrademarkRequest();

				std::string getOwnerName()const;
				void setOwnerName(const std::string& ownerName);
				std::string getClassification()const;
				void setClassification(const std::string& classification);
				std::string getRegistrationNumber()const;
				void setRegistrationNumber(const std::string& registrationNumber);
				bool getAccurateMatch()const;
				void setAccurateMatch(bool accurateMatch);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getProducts()const;
				void setProducts(const std::string& products);
				std::string getSimilarGroups()const;
				void setSimilarGroups(const std::string& similarGroups);
				std::string getName()const;
				void setName(const std::string& name);
				int getPageSize()const;
				void setPageSize(int pageSize);

            private:
				std::string ownerName_;
				std::string classification_;
				std::string registrationNumber_;
				bool accurateMatch_;
				int pageNumber_;
				std::string products_;
				std::string similarGroups_;
				std::string name_;
				int pageSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_DESCIRBECOMBINETRADEMARKREQUEST_H_
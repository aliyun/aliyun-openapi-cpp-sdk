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

#ifndef ALIBABACLOUD_MARKET_MODEL_DESCRIBECOMMODITIESREQUEST_H_
#define ALIBABACLOUD_MARKET_MODEL_DESCRIBECOMMODITIESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/market/MarketExport.h>

namespace AlibabaCloud
{
	namespace Market
	{
		namespace Model
		{
			class ALIBABACLOUD_MARKET_EXPORT DescribeCommoditiesRequest : public RpcServiceRequest
			{

			public:
				DescribeCommoditiesRequest();
				~DescribeCommoditiesRequest();

				std::string getCommodityGmtModifiedTo()const;
				void setCommodityGmtModifiedTo(const std::string& commodityGmtModifiedTo);
				std::string getCommodityGmtModifiedFrom()const;
				void setCommodityGmtModifiedFrom(const std::string& commodityGmtModifiedFrom);
				std::string getCommodityId()const;
				void setCommodityId(const std::string& commodityId);
				std::string getCommodityGmtPublishFrom()const;
				void setCommodityGmtPublishFrom(const std::string& commodityGmtPublishFrom);
				std::string getCommodityStatuses()const;
				void setCommodityStatuses(const std::string& commodityStatuses);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getCommodityGmtCreatedFrom()const;
				void setCommodityGmtCreatedFrom(const std::string& commodityGmtCreatedFrom);
				std::string getCommodityIds()const;
				void setCommodityIds(const std::string& commodityIds);
				std::string getCommodityGmtCreatedTo()const;
				void setCommodityGmtCreatedTo(const std::string& commodityGmtCreatedTo);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getCommodityGmtPublishTo()const;
				void setCommodityGmtPublishTo(const std::string& commodityGmtPublishTo);
				std::string getCommodityAuditStatuses()const;
				void setCommodityAuditStatuses(const std::string& commodityAuditStatuses);
				std::string getProperties()const;
				void setProperties(const std::string& properties);
				std::string getCommodityCategoryIds()const;
				void setCommodityCategoryIds(const std::string& commodityCategoryIds);

            private:
				std::string commodityGmtModifiedTo_;
				std::string commodityGmtModifiedFrom_;
				std::string commodityId_;
				std::string commodityGmtPublishFrom_;
				std::string commodityStatuses_;
				int pageNumber_;
				std::string commodityGmtCreatedFrom_;
				std::string commodityIds_;
				std::string commodityGmtCreatedTo_;
				int pageSize_;
				std::string commodityGmtPublishTo_;
				std::string commodityAuditStatuses_;
				std::string properties_;
				std::string commodityCategoryIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MARKET_MODEL_DESCRIBECOMMODITIESREQUEST_H_
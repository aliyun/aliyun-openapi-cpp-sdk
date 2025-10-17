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

#ifndef ALIBABACLOUD_POLARDB_MODEL_LISTORDERSRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_LISTORDERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT ListOrdersResult : public ServiceResult
			{
			public:
				struct Order
				{
					std::string orderStatus;
					std::string createdTime;
					std::string orderType;
					std::string instanceId;
					std::string chargeType;
					std::string commodityCode;
					std::string region;
					std::string produceCode;
					std::string orderId;
					std::string aliUid;
				};


				ListOrdersResult();
				explicit ListOrdersResult(const std::string &payload);
				~ListOrdersResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				int getPageSize()const;
				int getPageNumber()const;
				int getMaxResults()const;
				std::vector<Order> getOrderList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				int pageSize_;
				int pageNumber_;
				int maxResults_;
				std::vector<Order> orderList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_LISTORDERSRESULT_H_
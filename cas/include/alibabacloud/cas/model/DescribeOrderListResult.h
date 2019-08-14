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

#ifndef ALIBABACLOUD_CAS_MODEL_DESCRIBEORDERLISTRESULT_H_
#define ALIBABACLOUD_CAS_MODEL_DESCRIBEORDERLISTRESULT_H_

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
			class ALIBABACLOUD_CAS_EXPORT DescribeOrderListResult : public ServiceResult
			{
			public:
				struct Order
				{
					int verifyStatus;
					long afterDate;
					bool showRefund;
					std::string instanceId;
					std::string sourceType;
					std::string certType;
					int wildDomainCount;
					long orderId;
					std::string statusCode;
					std::string brandName;
					std::string orderType;
					long year;
					bool showCancel;
					std::string productAliasName;
					long maybeIssueDate;
					long id;
					std::string domain;
					long buyDate;
					int domainCount;
					long beforeDate;
				};


				DescribeOrderListResult();
				explicit DescribeOrderListResult(const std::string &payload);
				~DescribeOrderListResult();
				int getTotalCount()const;
				int getCurrentPage()const;
				int getShowSize()const;
				std::vector<Order> getOrderList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int currentPage_;
				int showSize_;
				std::vector<Order> orderList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAS_MODEL_DESCRIBEORDERLISTRESULT_H_
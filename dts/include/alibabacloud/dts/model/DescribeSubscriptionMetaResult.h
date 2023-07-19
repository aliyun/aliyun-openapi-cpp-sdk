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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBESUBSCRIPTIONMETARESULT_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBESUBSCRIPTIONMETARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT DescribeSubscriptionMetaResult : public ServiceResult
			{
			public:
				struct SubscriptionMetaListItem
				{
					long checkpoint;
					std::string dBList;
					std::string dProxyUrl;
					std::string topic;
					std::string sid;
				};


				DescribeSubscriptionMetaResult();
				explicit DescribeSubscriptionMetaResult(const std::string &payload);
				~DescribeSubscriptionMetaResult();
				std::vector<SubscriptionMetaListItem> getSubscriptionMetaList()const;
				std::string getHttpStatusCode()const;
				std::string getErrMessage()const;
				std::string getSuccess()const;
				std::string getErrCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<SubscriptionMetaListItem> subscriptionMetaList_;
				std::string httpStatusCode_;
				std::string errMessage_;
				std::string success_;
				std::string errCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBESUBSCRIPTIONMETARESULT_H_
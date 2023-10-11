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

#ifndef ALIBABACLOUD_DYPNSAPI_MODEL_QUERYSENDDETAILSRESULT_H_
#define ALIBABACLOUD_DYPNSAPI_MODEL_QUERYSENDDETAILSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dypnsapi/DypnsapiExport.h>

namespace AlibabaCloud
{
	namespace Dypnsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYPNSAPI_EXPORT QuerySendDetailsResult : public ServiceResult
			{
			public:
				struct ModelItem
				{
					std::string templateCode;
					std::string receiveDate;
					std::string phoneNum;
					std::string content;
					long sendStatus;
					std::string outId;
					std::string sendDate;
					std::string errCode;
				};


				QuerySendDetailsResult();
				explicit QuerySendDetailsResult(const std::string &payload);
				~QuerySendDetailsResult();
				std::string getAccessDeniedDetail()const;
				long getTotalCount()const;
				std::string getMessage()const;
				std::vector<ModelItem> getModel()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string accessDeniedDetail_;
				long totalCount_;
				std::string message_;
				std::vector<ModelItem> model_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYPNSAPI_MODEL_QUERYSENDDETAILSRESULT_H_
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

#ifndef ALIBABACLOUD_AIREC_MODEL_LISTEXPERIMENTSRESULT_H_
#define ALIBABACLOUD_AIREC_MODEL_LISTEXPERIMENTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/airec/AirecExport.h>

namespace AlibabaCloud
{
	namespace Airec
	{
		namespace Model
		{
			class ALIBABACLOUD_AIREC_EXPORT ListExperimentsResult : public ServiceResult
			{
			public:
				struct ResultItem
				{
					std::string status;
					std::string description;
					std::string offlineTime;
					std::string experimentId;
					std::string onlineTime;
					bool base;
					std::vector<std::string> buckets;
					std::string name;
				};


				ListExperimentsResult();
				explicit ListExperimentsResult(const std::string &payload);
				~ListExperimentsResult();
				std::vector<ResultItem> getresult()const;
				std::string getRequestId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ResultItem> result_;
				std::string requestId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AIREC_MODEL_LISTEXPERIMENTSRESULT_H_
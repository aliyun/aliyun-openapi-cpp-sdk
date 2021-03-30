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

#ifndef ALIBABACLOUD_AIREC_MODEL_LISTRANKINGMODELSREQUEST_H_
#define ALIBABACLOUD_AIREC_MODEL_LISTRANKINGMODELSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/airec/AirecExport.h>

namespace AlibabaCloud
{
	namespace Airec
	{
		namespace Model
		{
			class ALIBABACLOUD_AIREC_EXPORT ListRankingModelsRequest : public RoaServiceRequest
			{

			public:
				ListRankingModelsRequest();
				~ListRankingModelsRequest();

				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				int getSize()const;
				void setSize(int size);
				std::string getRankingModelId()const;
				void setRankingModelId(const std::string& rankingModelId);
				int getPage()const;
				void setPage(int page);

            private:
				std::string instanceId_;
				int size_;
				std::string rankingModelId_;
				int page_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AIREC_MODEL_LISTRANKINGMODELSREQUEST_H_
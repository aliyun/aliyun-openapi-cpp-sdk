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

#ifndef ALIBABACLOUD_REID_MODEL_LISTACTIONDATAREQUEST_H_
#define ALIBABACLOUD_REID_MODEL_LISTACTIONDATAREQUEST_H_

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
			class ALIBABACLOUD_REID_EXPORT ListActionDataRequest : public RpcServiceRequest
			{

			public:
				ListActionDataRequest();
				~ListActionDataRequest();

				long getEndTime()const;
				void setEndTime(long endTime);
				long getStartTime()const;
				void setStartTime(long startTime);
				long getStoreId()const;
				void setStoreId(long storeId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				int getPageSize()const;
				void setPageSize(int pageSize);
				bool getFilterInvalidData()const;
				void setFilterInvalidData(bool filterInvalidData);

            private:
				long endTime_;
				long startTime_;
				long storeId_;
				int pageNumber_;
				int pageSize_;
				bool filterInvalidData_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_REID_MODEL_LISTACTIONDATAREQUEST_H_
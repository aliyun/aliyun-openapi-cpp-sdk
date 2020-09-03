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

#ifndef ALIBABACLOUD_REID_MODEL_DESCRIBECAMERASTATISTICSREQUEST_H_
#define ALIBABACLOUD_REID_MODEL_DESCRIBECAMERASTATISTICSREQUEST_H_

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
			class ALIBABACLOUD_REID_EXPORT DescribeCameraStatisticsRequest : public RpcServiceRequest
			{

			public:
				DescribeCameraStatisticsRequest();
				~DescribeCameraStatisticsRequest();

				long getStartTimestamp()const;
				void setStartTimestamp(long startTimestamp);
				long getStoreId()const;
				void setStoreId(long storeId);
				long getEndTimestamp()const;
				void setEndTimestamp(long endTimestamp);
				long getLocationId()const;
				void setLocationId(long locationId);

            private:
				long startTimestamp_;
				long storeId_;
				long endTimestamp_;
				long locationId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_REID_MODEL_DESCRIBECAMERASTATISTICSREQUEST_H_
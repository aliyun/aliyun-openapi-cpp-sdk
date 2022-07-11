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

#ifndef ALIBABACLOUD_IOT_MODEL_DELETEDATASOURCEITEMREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_DELETEDATASOURCEITEMREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/iot/IotExport.h>

namespace AlibabaCloud
{
	namespace Iot
	{
		namespace Model
		{
			class ALIBABACLOUD_IOT_EXPORT DeleteDataSourceItemRequest : public RpcServiceRequest
			{

			public:
				DeleteDataSourceItemRequest();
				~DeleteDataSourceItemRequest();

				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				long getDataSourceItemId()const;
				void setDataSourceItemId(long dataSourceItemId);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				long getDataSourceId()const;
				void setDataSourceId(long dataSourceId);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);

            private:
				std::string iotInstanceId_;
				long dataSourceItemId_;
				std::string apiProduct_;
				long dataSourceId_;
				std::string apiRevision_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_DELETEDATASOURCEITEMREQUEST_H_
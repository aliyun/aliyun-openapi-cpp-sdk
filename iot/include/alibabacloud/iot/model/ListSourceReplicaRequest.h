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

#ifndef ALIBABACLOUD_IOT_MODEL_LISTSOURCEREPLICAREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_LISTSOURCEREPLICAREQUEST_H_

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
			class ALIBABACLOUD_IOT_EXPORT ListSourceReplicaRequest : public RpcServiceRequest
			{

			public:
				ListSourceReplicaRequest();
				~ListSourceReplicaRequest();

				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				std::string getContext()const;
				void setContext(const std::string& context);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getSourceType()const;
				void setSourceType(const std::string& sourceType);
				int getPageNo()const;
				void setPageNo(int pageNo);
				std::string getLpInstanceId()const;
				void setLpInstanceId(const std::string& lpInstanceId);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);

            private:
				std::string iotInstanceId_;
				std::string context_;
				int pageSize_;
				std::string sourceType_;
				int pageNo_;
				std::string lpInstanceId_;
				std::string apiProduct_;
				std::string apiRevision_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_LISTSOURCEREPLICAREQUEST_H_
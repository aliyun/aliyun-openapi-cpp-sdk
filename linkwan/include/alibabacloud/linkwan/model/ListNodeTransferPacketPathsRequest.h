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

#ifndef ALIBABACLOUD_LINKWAN_MODEL_LISTNODETRANSFERPACKETPATHSREQUEST_H_
#define ALIBABACLOUD_LINKWAN_MODEL_LISTNODETRANSFERPACKETPATHSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/linkwan/LinkWANExport.h>

namespace AlibabaCloud
{
	namespace LinkWAN
	{
		namespace Model
		{
			class ALIBABACLOUD_LINKWAN_EXPORT ListNodeTransferPacketPathsRequest : public RpcServiceRequest
			{

			public:
				ListNodeTransferPacketPathsRequest();
				~ListNodeTransferPacketPathsRequest();

				std::string getBase64EncodedMacPayload()const;
				void setBase64EncodedMacPayload(const std::string& base64EncodedMacPayload);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				long getLogMillis()const;
				void setLogMillis(long logMillis);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getDevEui()const;
				void setDevEui(const std::string& devEui);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);

            private:
				std::string base64EncodedMacPayload_;
				int pageNumber_;
				std::string iotInstanceId_;
				long logMillis_;
				int pageSize_;
				std::string devEui_;
				std::string apiProduct_;
				std::string apiRevision_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LINKWAN_MODEL_LISTNODETRANSFERPACKETPATHSREQUEST_H_
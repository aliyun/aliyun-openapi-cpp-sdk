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

#ifndef ALIBABACLOUD_EIPANYCAST_MODEL_UPDATEANYCASTEIPADDRESSASSOCIATIONSREQUEST_H_
#define ALIBABACLOUD_EIPANYCAST_MODEL_UPDATEANYCASTEIPADDRESSASSOCIATIONSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/eipanycast/EipanycastExport.h>

namespace AlibabaCloud
{
	namespace Eipanycast
	{
		namespace Model
		{
			class ALIBABACLOUD_EIPANYCAST_EXPORT UpdateAnycastEipAddressAssociationsRequest : public RpcServiceRequest
			{

			public:
				UpdateAnycastEipAddressAssociationsRequest();
				~UpdateAnycastEipAddressAssociationsRequest();

				bool getDryRun()const;
				void setDryRun(bool dryRun);
				std::string getAssociationMode()const;
				void setAssociationMode(const std::string& associationMode);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				Array getPopLocationDeleteList()const;
				void setPopLocationDeleteList(const Array& popLocationDeleteList);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getAnycastId()const;
				void setAnycastId(const std::string& anycastId);
				Array getPopLocationAddList()const;
				void setPopLocationAddList(const Array& popLocationAddList);
				std::string getBindInstanceId()const;
				void setBindInstanceId(const std::string& bindInstanceId);

            private:
				bool dryRun_;
				std::string associationMode_;
				std::string clientToken_;
				Array popLocationDeleteList_;
				std::string regionId_;
				std::string anycastId_;
				Array popLocationAddList_;
				std::string bindInstanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EIPANYCAST_MODEL_UPDATEANYCASTEIPADDRESSASSOCIATIONSREQUEST_H_
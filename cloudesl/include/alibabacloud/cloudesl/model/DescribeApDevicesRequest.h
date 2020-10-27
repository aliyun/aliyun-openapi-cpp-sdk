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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEAPDEVICESREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEAPDEVICESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT DescribeApDevicesRequest : public RpcServiceRequest
			{

			public:
				DescribeApDevicesRequest();
				~DescribeApDevicesRequest();

				std::string getExtraParams()const;
				void setExtraParams(const std::string& extraParams);
				std::string getApMac()const;
				void setApMac(const std::string& apMac);
				std::string getStoreId()const;
				void setStoreId(const std::string& storeId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getModel()const;
				void setModel(const std::string& model);
				bool getBeActivate()const;
				void setBeActivate(bool beActivate);
				bool getStatus()const;
				void setStatus(bool status);

            private:
				std::string extraParams_;
				std::string apMac_;
				std::string storeId_;
				int pageNumber_;
				int pageSize_;
				std::string model_;
				bool beActivate_;
				bool status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEAPDEVICESREQUEST_H_
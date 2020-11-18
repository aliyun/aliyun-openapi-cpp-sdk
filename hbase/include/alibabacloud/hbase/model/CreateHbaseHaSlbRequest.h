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

#ifndef ALIBABACLOUD_HBASE_MODEL_CREATEHBASEHASLBREQUEST_H_
#define ALIBABACLOUD_HBASE_MODEL_CREATEHBASEHASLBREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/hbase/HBaseExport.h>

namespace AlibabaCloud
{
	namespace HBase
	{
		namespace Model
		{
			class ALIBABACLOUD_HBASE_EXPORT CreateHbaseHaSlbRequest : public RpcServiceRequest
			{

			public:
				CreateHbaseHaSlbRequest();
				~CreateHbaseHaSlbRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getHaTypes()const;
				void setHaTypes(const std::string& haTypes);
				std::string getHbaseType()const;
				void setHbaseType(const std::string& hbaseType);
				std::string getBdsId()const;
				void setBdsId(const std::string& bdsId);
				std::string getHaId()const;
				void setHaId(const std::string& haId);

            private:
				std::string clientToken_;
				std::string haTypes_;
				std::string hbaseType_;
				std::string bdsId_;
				std::string haId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_CREATEHBASEHASLBREQUEST_H_
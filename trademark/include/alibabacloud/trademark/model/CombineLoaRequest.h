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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_COMBINELOAREQUEST_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_COMBINELOAREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/trademark/TrademarkExport.h>

namespace AlibabaCloud
{
	namespace Trademark
	{
		namespace Model
		{
			class ALIBABACLOUD_TRADEMARK_EXPORT CombineLoaRequest : public RpcServiceRequest
			{

			public:
				CombineLoaRequest();
				~CombineLoaRequest();

				std::string getMaterialName()const;
				void setMaterialName(const std::string& materialName);
				std::string getAddress()const;
				void setAddress(const std::string& address);
				std::string getMaterialId()const;
				void setMaterialId(const std::string& materialId);
				std::string getTrademarkName()const;
				void setTrademarkName(const std::string& trademarkName);
				std::string getNationality()const;
				void setNationality(const std::string& nationality);
				std::string getTmProduceType()const;
				void setTmProduceType(const std::string& tmProduceType);

            private:
				std::string materialName_;
				std::string address_;
				std::string materialId_;
				std::string trademarkName_;
				std::string nationality_;
				std::string tmProduceType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_COMBINELOAREQUEST_H_
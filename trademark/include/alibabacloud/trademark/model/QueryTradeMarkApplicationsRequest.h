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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEMARKAPPLICATIONSREQUEST_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEMARKAPPLICATIONSREQUEST_H_

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
			class ALIBABACLOUD_TRADEMARK_EXPORT QueryTradeMarkApplicationsRequest : public RpcServiceRequest
			{

			public:
				QueryTradeMarkApplicationsRequest();
				~QueryTradeMarkApplicationsRequest();

				std::string getTmName()const;
				void setTmName(const std::string& tmName);
				std::string getMaterialName()const;
				void setMaterialName(const std::string& materialName);
				int getHidden()const;
				void setHidden(int hidden);
				std::string getOrderId()const;
				void setOrderId(const std::string& orderId);
				std::string getTmNumber()const;
				void setTmNumber(const std::string& tmNumber);
				std::string getIntentionBizId()const;
				void setIntentionBizId(const std::string& intentionBizId);
				int getPageNum()const;
				void setPageNum(int pageNum);
				std::string getType()const;
				void setType(const std::string& type);
				int getSupplementStatus()const;
				void setSupplementStatus(int supplementStatus);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				std::string getSortOrder()const;
				void setSortOrder(const std::string& sortOrder);
				int getStatus()const;
				void setStatus(int status);

            private:
				std::string tmName_;
				std::string materialName_;
				int hidden_;
				std::string orderId_;
				std::string tmNumber_;
				std::string intentionBizId_;
				int pageNum_;
				std::string type_;
				int supplementStatus_;
				int pageSize_;
				std::string bizId_;
				std::string sortOrder_;
				int status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEMARKAPPLICATIONSREQUEST_H_
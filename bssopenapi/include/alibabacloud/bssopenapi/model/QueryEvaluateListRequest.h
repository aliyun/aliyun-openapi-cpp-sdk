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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYEVALUATELISTREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYEVALUATELISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/bssopenapi/BssOpenApiExport.h>

namespace AlibabaCloud
{
	namespace BssOpenApi
	{
		namespace Model
		{
			class ALIBABACLOUD_BSSOPENAPI_EXPORT QueryEvaluateListRequest : public RpcServiceRequest
			{

			public:
				QueryEvaluateListRequest();
				~QueryEvaluateListRequest();

				std::string getEndSearchTime()const;
				void setEndSearchTime(const std::string& endSearchTime);
				std::string getOutBizId()const;
				void setOutBizId(const std::string& outBizId);
				int getSortType()const;
				void setSortType(int sortType);
				std::vector<std::string> getBizTypeList()const;
				void setBizTypeList(const std::vector<std::string>& bizTypeList);
				int getType()const;
				void setType(int type);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getPageNum()const;
				void setPageNum(int pageNum);
				std::string getStartSearchTime()const;
				void setStartSearchTime(const std::string& startSearchTime);
				std::string getEndBizTime()const;
				void setEndBizTime(const std::string& endBizTime);
				int getPageSize()const;
				void setPageSize(int pageSize);
				long getEndAmount()const;
				void setEndAmount(long endAmount);
				std::string getBillCycle()const;
				void setBillCycle(const std::string& billCycle);
				long getStartAmount()const;
				void setStartAmount(long startAmount);
				std::string getStartBizTime()const;
				void setStartBizTime(const std::string& startBizTime);

            private:
				std::string endSearchTime_;
				std::string outBizId_;
				int sortType_;
				std::vector<std::string> bizTypeList_;
				int type_;
				long ownerId_;
				int pageNum_;
				std::string startSearchTime_;
				std::string endBizTime_;
				int pageSize_;
				long endAmount_;
				std::string billCycle_;
				long startAmount_;
				std::string startBizTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYEVALUATELISTREQUEST_H_
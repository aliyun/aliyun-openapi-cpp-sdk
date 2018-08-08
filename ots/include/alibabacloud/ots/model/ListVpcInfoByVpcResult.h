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

#ifndef ALIBABACLOUD_OTS_MODEL_LISTVPCINFOBYVPCRESULT_H_
#define ALIBABACLOUD_OTS_MODEL_LISTVPCINFOBYVPCRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ots/OtsExport.h>

namespace AlibabaCloud
{
	namespace Ots
	{
		namespace Model
		{
			class ALIBABACLOUD_OTS_EXPORT ListVpcInfoByVpcResult : public ServiceResult
			{
			public:
				struct VpcInfo
				{
					std::string instanceName;
					std::string regionNo;
					std::string instanceVpcName;
					std::string endpoint;
					std::string domain;
				};


				ListVpcInfoByVpcResult();
				explicit ListVpcInfoByVpcResult(const std::string &payload);
				~ListVpcInfoByVpcResult();
				long getTotalCount()const;
				long getPageNum()const;
				long getPageSize()const;
				std::string getVpcId()const;
				std::vector<VpcInfo> getVpcInfos()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				long pageNum_;
				long pageSize_;
				std::string vpcId_;
				std::vector<VpcInfo> vpcInfos_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OTS_MODEL_LISTVPCINFOBYVPCRESULT_H_
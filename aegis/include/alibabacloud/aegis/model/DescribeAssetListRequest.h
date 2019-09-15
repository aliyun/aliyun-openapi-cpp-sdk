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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBEASSETLISTREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBEASSETLISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeAssetListRequest : public RpcServiceRequest
			{

			public:
				DescribeAssetListRequest();
				~DescribeAssetListRequest();

				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getFilterConditions()const;
				void setFilterConditions(const std::string& filterConditions);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getFrom()const;
				void setFrom(const std::string& from);
				std::string getLang()const;
				void setLang(const std::string& lang);

            private:
				int currentPage_;
				std::string filterConditions_;
				std::string sourceIp_;
				int pageSize_;
				std::string from_;
				std::string lang_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBEASSETLISTREQUEST_H_
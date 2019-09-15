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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBEATTACKANALYSISDATAREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBEATTACKANALYSISDATAREQUEST_H_

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
			class ALIBABACLOUD_AEGIS_EXPORT DescribeAttackAnalysisDataRequest : public RpcServiceRequest
			{

			public:
				DescribeAttackAnalysisDataRequest();
				~DescribeAttackAnalysisDataRequest();

				std::string getData()const;
				void setData(const std::string& data);
				std::string getBase64()const;
				void setBase64(const std::string& base64);
				long getStartTime()const;
				void setStartTime(long startTime);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				long getEndTime()const;
				void setEndTime(long endTime);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);

            private:
				std::string data_;
				std::string base64_;
				long startTime_;
				std::string type_;
				std::string sourceIp_;
				int pageSize_;
				std::string lang_;
				long endTime_;
				int currentPage_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBEATTACKANALYSISDATAREQUEST_H_
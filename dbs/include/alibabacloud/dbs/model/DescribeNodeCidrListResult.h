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

#ifndef ALIBABACLOUD_DBS_MODEL_DESCRIBENODECIDRLISTRESULT_H_
#define ALIBABACLOUD_DBS_MODEL_DESCRIBENODECIDRLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dbs/DbsExport.h>

namespace AlibabaCloud
{
	namespace Dbs
	{
		namespace Model
		{
			class ALIBABACLOUD_DBS_EXPORT DescribeNodeCidrListResult : public ServiceResult
			{
			public:


				DescribeNodeCidrListResult();
				explicit DescribeNodeCidrListResult(const std::string &payload);
				~DescribeNodeCidrListResult();
				std::vector<std::string> getInternetIPs()const;
				int getHttpStatusCode()const;
				std::vector<std::string> getIntranetIPs()const;
				std::string getErrMessage()const;
				bool getSuccess()const;
				std::string getErrCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> internetIPs_;
				int httpStatusCode_;
				std::vector<std::string> intranetIPs_;
				std::string errMessage_;
				bool success_;
				std::string errCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DBS_MODEL_DESCRIBENODECIDRLISTRESULT_H_
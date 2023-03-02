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

#ifndef ALIBABACLOUD_LTO_MODEL_DESCRIBEMEMBERSTATINFORESULT_H_
#define ALIBABACLOUD_LTO_MODEL_DESCRIBEMEMBERSTATINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/lto/LtoExport.h>

namespace AlibabaCloud
{
	namespace Lto
	{
		namespace Model
		{
			class ALIBABACLOUD_LTO_EXPORT DescribeMemberStatInfoResult : public ServiceResult
			{
			public:
				struct MemberStatInfo
				{
					int bizChainCount;
					std::string memberId;
					std::string memberName;
					long usedCount;
					long authorizedCount;
				};


				DescribeMemberStatInfoResult();
				explicit DescribeMemberStatInfoResult(const std::string &payload);
				~DescribeMemberStatInfoResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::vector<MemberStatInfo> getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				std::vector<MemberStatInfo> data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LTO_MODEL_DESCRIBEMEMBERSTATINFORESULT_H_
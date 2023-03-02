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

#ifndef ALIBABACLOUD_LTL_MODEL_DESCRIBEMEMBERCAPACITYINFORESULT_H_
#define ALIBABACLOUD_LTL_MODEL_DESCRIBEMEMBERCAPACITYINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ltl/LtlExport.h>

namespace AlibabaCloud
{
	namespace Ltl
	{
		namespace Model
		{
			class ALIBABACLOUD_LTL_EXPORT DescribeMemberCapacityInfoResult : public ServiceResult
			{
			public:
				struct MemberCapacityInfo
				{
					std::string memberId;
					std::string memberUid;
					std::string usedCapacity;
					std::string memberName;
					std::string usedCount;
				};


				DescribeMemberCapacityInfoResult();
				explicit DescribeMemberCapacityInfoResult(const std::string &payload);
				~DescribeMemberCapacityInfoResult();
				std::string getMessage()const;
				std::vector<MemberCapacityInfo> getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<MemberCapacityInfo> data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LTL_MODEL_DESCRIBEMEMBERCAPACITYINFORESULT_H_
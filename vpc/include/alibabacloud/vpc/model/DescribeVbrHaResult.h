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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEVBRHARESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEVBRHARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT DescribeVbrHaResult : public ServiceResult
			{
			public:


				DescribeVbrHaResult();
				explicit DescribeVbrHaResult(const std::string &payload);
				~DescribeVbrHaResult();
				std::string getStatus()const;
				std::string getVbrHaId()const;
				std::string getDescription()const;
				std::string getCreationTime()const;
				std::string getVbrId()const;
				std::string getRegionId()const;
				std::string getPeerVbrId()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string vbrHaId_;
				std::string description_;
				std::string creationTime_;
				std::string vbrId_;
				std::string regionId_;
				std::string peerVbrId_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEVBRHARESULT_H_
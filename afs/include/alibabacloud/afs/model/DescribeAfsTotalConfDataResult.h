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

#ifndef ALIBABACLOUD_AFS_MODEL_DESCRIBEAFSTOTALCONFDATARESULT_H_
#define ALIBABACLOUD_AFS_MODEL_DESCRIBEAFSTOTALCONFDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/afs/AfsExport.h>

namespace AlibabaCloud
{
	namespace Afs
	{
		namespace Model
		{
			class ALIBABACLOUD_AFS_EXPORT DescribeAfsTotalConfDataResult : public ServiceResult
			{
			public:
				struct AfsTotalConfData
				{
					std::string category;
					long value;
					std::string time;
				};


				DescribeAfsTotalConfDataResult();
				explicit DescribeAfsTotalConfDataResult(const std::string &payload);
				~DescribeAfsTotalConfDataResult();
				std::vector<AfsTotalConfData> getIcTotalConfSigDatas()const;
				std::vector<AfsTotalConfData> getNvcTotalConfSecVerifyDatas()const;
				std::vector<AfsTotalConfData> getIcTotalConfVerifyDatas()const;
				std::vector<AfsTotalConfData> getNvcTotalConfVerifyDatas()const;
				std::vector<AfsTotalConfData> getIcTotalConfSecVerifyDatas()const;
				std::vector<AfsTotalConfData> getNcTotalConfBlockDatas()const;
				std::vector<AfsTotalConfData> getNcTotalConfSigDatas()const;
				std::vector<AfsTotalConfData> getIcTotalConfBlockDatas()const;
				std::vector<AfsTotalConfData> getNcTotalConfVerifyDatas()const;
				std::string getBizCode()const;
				bool getHasData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<AfsTotalConfData> icTotalConfSigDatas_;
				std::vector<AfsTotalConfData> nvcTotalConfSecVerifyDatas_;
				std::vector<AfsTotalConfData> icTotalConfVerifyDatas_;
				std::vector<AfsTotalConfData> nvcTotalConfVerifyDatas_;
				std::vector<AfsTotalConfData> icTotalConfSecVerifyDatas_;
				std::vector<AfsTotalConfData> ncTotalConfBlockDatas_;
				std::vector<AfsTotalConfData> ncTotalConfSigDatas_;
				std::vector<AfsTotalConfData> icTotalConfBlockDatas_;
				std::vector<AfsTotalConfData> ncTotalConfVerifyDatas_;
				std::string bizCode_;
				bool hasData_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AFS_MODEL_DESCRIBEAFSTOTALCONFDATARESULT_H_